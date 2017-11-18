#include "PuzzleSolverGrp3.h"

PuzzleSolverGrp3::PuzzleSolverGrp3(vector <Part> part_array, vector <Part *> corners_array, vector <Part *> edges_array, vector <Part *> inners_array)
	: m_part_array(part_array), m_corners_array(corners_array), m_edges_array(edges_array), m_inners_array(inners_array)
{
	int numSpalten = 0;
	int numZeilen = 0;
	for (int kanteHtemp = 1; kanteHtemp <= (m_edges_array.size() / 2) - 1; kanteHtemp++)
	{
		int kanteVtemp = (m_edges_array.size() / 2) - kanteHtemp;

		if ((kanteHtemp * kanteVtemp) == m_inners_array.size()) // 884
		{
			if (kanteHtemp >= kanteVtemp)
			{
				numZeilen = kanteHtemp + 2;
				numSpalten = kanteVtemp + 2;
			}
			cout << "Zeilen: " << kanteVtemp + 2 << endl;
			cout << "Spalten: " << kanteHtemp + 2 << endl;
			cout << "Anzahl Kanten: " << kanteVtemp * 2 + kanteHtemp * 2 << endl; // 36*28 = 884
			cout << "Matrixgroesse = " << (kanteVtemp + 2)*(kanteHtemp + 2) << endl;
		}
	}

	m_solutionVector = vector <SolutionElement> (numSpalten * numZeilen);
}

void PuzzleSolverGrp3::SolvePuzzle()
{
	cout << "Groesse:" << m_solutionVector.size();
}

PuzzleSolverGrp3::~PuzzleSolverGrp3()
{
}