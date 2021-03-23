#pragma once
class ChessBoard
{
public:
	ChessBoard(int);
	~ChessBoard();


private:
	int dimention;
	int* Board = new int(dimention * dimention);

};

ChessBoard::ChessBoard(int n)
{
	dimention = n;
}

ChessBoard::~ChessBoard()
{
	delete[] Board;
}