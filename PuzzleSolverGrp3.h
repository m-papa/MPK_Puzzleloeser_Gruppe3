#include "Part.h"
#include "SolutionElement.h"
#include <vector>

class PuzzleSolverGrp3
{
public:
	PuzzleSolverGrp3(vector <Part> part_array, vector <Part *> corners_array, vector <Part *> edges_array, vector <Part *> inners_array);
	~PuzzleSolverGrp3();

	void SolvePuzzle();

private:
	vector <Part>	m_part_array;
	vector <Part *> m_corners_array;
	vector <Part *> m_edges_array;
	vector <Part *> m_inners_array;
	vector <SolutionElement> m_solutionVector;
};

