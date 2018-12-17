#include <iostream>
using namespace std;
class unit
{
public:
    char uncolor;
    unit(char color)
    {
        uncolor=color;
    }
    ~unit(){}
    char getcolor()
    {
        return uncolor;
    }

    bool isleagalmove(int sorcerow,int sorcecol,int destrow,int destcol,unit *boarda[8][8])
    {
        unit* test=boarda[destrow][destcol];
        if((test==0)||(uncolor!=test->getcolor()))
        {
            return areloclegal(sorcerow,sorcecol,destrow,destcol,boarda);
        }
        return false;
    }
    virtual char getunit() = 0;
    virtual bool areloclegal(int sorcerow,int sorcecol,int destrow,int destcol,unit *boarda[8][8]) =0;
};
class pawn : public unit
{
public:
    pawn(char color):unit(color){}
    virtual char getunit()
    {
        return 'P';
    }
    bool areloclegal(int sorcerow,int sorcecol,int destrow,int destcol,unit *boarda[8][8])
    {
        unit* test=boarda[destrow][destcol];
        if(test==0)
        {
            if(destcol==sorcecol)
            {
                if(getcolor()=='W')
                {
                    if(destrow==sorcerow+1)
                        return true;
                }
                else
                {
                    if(destrow==sorcerow-1)
                        return true;
                }
            }
        }
        else
        {
            if(destcol==sorcecol+1 || destcol==sorcecol-1)
            {
                if(getcolor()=='W')
                {
                    if(destrow==sorcerow+1)
                        return true;
                }
                else
                {
                    if(destrow==sorcerow-1)
                        return true;
                }
            }
        }
        return false;
    }
};
class rook : public unit
{
public:
    rook(char color):unit(color){}
    virtual char getunit()
    {
        return 'R';
    }
    bool areloclegal(int sorcerow,int sorcecol,int destrow,int destcol,unit *boarda[8][8])
    {
        if(sorcerow==destrow)
        {
            int checkcol=(destcol-sorcecol>0) ? 1: -1;
            for(int icheccol=sorcecol+checkcol;icheccol!=destcol;icheccol=icheccol+checkcol)
            {
                if(boarda[sorcerow][icheccol]!=0)
                    return false;
            }
            return true;
        }
        else if(sorcecol==destcol)
        {
            int checkrow=(destrow-sorcerow>0) ? 1: -1;
            for(int ichecrow=sorcerow+checkrow;ichecrow!=destrow;ichecrow=ichecrow+checkrow)
            {
                if(boarda[ichecrow][sorcecol]!=0)
                    return false;
            }
            return true;
        }
        return false;
    }
};
class knight : public unit
{
public:
    knight(char color):unit(color){}
    virtual char getunit()
    {
        return 'N';
    }
    bool areloclegal(int sorcerow,int sorcecol,int destrow,int destcol,unit *boarda[8][8])
    {
        if(destcol==sorcecol+1 || destcol==sorcecol-1)
        {
            if(destrow==sorcerow+2 || destrow==sorcerow-2)
            {
                return true;
            }
        }
        else if( destcol==sorcecol+2 || destcol==sorcecol-2)
        {
            if(destrow==sorcerow+1 || destrow==sorcerow-1)
            {
                return true;
            }
        }
        return false;
    }
};
class bishop : public unit
{
public:
    bishop(char color):unit(color){}
    virtual char getunit()
    {
        return 'B';
    }
    bool areloclegal(int sorcerow,int sorcecol,int destrow,int destcol,unit *boarda[8][8])
    {
        if((destcol-sorcecol)==(destrow-sorcerow) || (destcol-sorcecol)==(sorcerow-destrow))
        {
            int checkrow=(destrow-sorcerow>0)? 1:-1;
            int checkcol=(destcol-sorcecol>0)? 1: -1;
            int icheckrow;
            int icheckcol;
            for(icheckcol=sorcecol+checkcol,icheckrow=sorcerow+checkrow;icheckcol!=destcol;icheckcol=icheckcol+checkcol,icheckrow=icheckrow+checkrow)
            {
                if(boarda[icheckrow][icheckcol]==0)
                    return false;
            }
            return true;
        }
        return false;
    }
};
class queen : public unit
{
public:
    queen(char color):unit(color){}
    virtual char getunit()
    {
        return 'Q';
    }
    bool areloclegal(int sorcerow,int sorcecol,int destrow,int destcol,unit *boarda[8][8])
    {
        if((sorcerow==destrow)||(sorcecol==destcol))
        {
            if(sorcerow==destrow)
            {
                int checkcol=(destcol-sorcecol>0) ? 1: -1;
                for(int icheccol=sorcecol+checkcol;icheccol!=destcol;icheccol=icheccol+checkcol)
                {
                    if(boarda[sorcerow][icheccol]!=0)
                        return false;
                }
                return true;
            }
            else if(sorcecol==destcol)
            {
                int checkrow=(destrow-sorcerow>0) ? 1: -1;
                for(int ichecrow=sorcerow+checkrow;ichecrow!=destrow;ichecrow=ichecrow+checkrow)
                {
                    if(boarda[ichecrow][sorcecol]!=0)
                        return false;
                }
                return true;
            }
            return false;
        }
        else if((destcol-sorcecol)==(destrow-sorcerow) || (destcol-sorcecol)==(sorcerow-destrow))
        {
            int checkrow=(destrow-sorcerow>0)? 1:-1;
            int checkcol=(destcol-sorcecol>0)? 1: -1;
            int icheckrow;
            int icheckcol;
            for(icheckcol=sorcecol+checkcol,icheckrow=sorcerow+checkrow;icheckcol!=destcol;icheckcol=icheckcol+checkcol,icheckrow=icheckrow+checkrow)
            {
                if(boarda[icheckrow][icheckcol]==0)
                    return false;
            }
            return true;
        }
        return false;


    }
};
class king : public unit
{
public:
    king(char color):unit(color){}
    virtual char getunit()
    {
        return 'K';
    }
    bool areloclegal(int sorcerow,int sorcecol,int destrow,int destcol,unit *boarda[8][8])
    {
        int checkrow=destrow-sorcerow;
        int checkcol=destcol-sorcecol;
        if(((checkrow >=-1)&&(checkrow<=1) ) && ((checkcol>=-1)&&(checkcol<=1)))
        {
            return true;
        }
        return false;
    }
};
class board
{
public:
    unit *gameboard[8][8];
    board()
    {
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                gameboard[i][j]=0;
            }
        }
        //Black
        for(int i=0;i<8;i++)
        {
            gameboard[6][i] = new pawn('B');
        }
        gameboard[7][0]=new rook('B');
        gameboard[7][1]=new knight('B');
        gameboard[7][2]=new bishop('B');
        gameboard[7][3]=new king('B');
        gameboard[7][4]=new queen('B');
        gameboard[7][5]=new bishop('B');
        gameboard[7][6]=new knight('B');
        gameboard[7][7]=new rook('B');
        //White
        for(int i=0;i<8;i++)
        {
            gameboard[1][i]=new pawn('W');
        }
        gameboard[0][0]=new rook('W');
        gameboard[0][1]=new knight('W');
        gameboard[0][2]=new bishop('W');
        gameboard[0][3]=new king('W');
        gameboard[0][4]=new queen('W');
        gameboard[0][5]=new bishop('W');
        gameboard[0][6]=new knight('W');
        gameboard[0][7]=new rook('W');
    }
    ~board()
    {
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                delete gameboard[i][j];
                gameboard[i][j]=0;
            }
        }
    }
    void print()
    {
        for(int irow=0;irow<24;irow++)
        {
            int row=irow/3;
            if(irow%3==1)
            {
                cout<< "-"<<8-row<<"-";
            }
            else
            {
                cout<<"---";
            }
            for(int icol=0;icol<32;icol++)
            {
                int col=icol/4;
                if(((irow%3)==1)&&((icol%4==1)||(icol%4==2))&&(gameboard[7-row][col]!=0))
                {
                    if(icol%4==1)
                    {
                        cout<<gameboard[7-row][col]->getcolor();
                    }
                    else if(icol%4==2)
                    {
                        cout <<gameboard[7-row][col]->getunit();
                    }
                }
                else
                {
                    if((row+col)%2==1)
                    {
                        cout<<"*";
                    }
                    else
                    {
                        cout<<" ";
                    }
                }
            }
            cout<<endl;
        }
        for(int irow=0;irow<3;irow++)
        {
            if(irow%3==1)
            {
                cout<< "---";
                for(int icol=0;icol<32;icol++)
                {
                    int col=icol/4;
                    if(icol%4==1)
                    {
                        cout<<col+1;
                    }
                    else
                    {
                        cout<<'-';
                    }
                }
                cout<< endl;
            }
            else
            {
                for(int icol=0;icol<36;icol++)
                {
                    cout<< "-";
                }
                cout<< endl;
            }
        }

    }
    bool ischeck(char color)
    {
        int ikrow;
        int ikcol;
        for(int irow=0;irow<8;irow++)
        {
            for(int icol=0;icol<8;icol++)
            {
                if((gameboard[irow][icol]!=0)&&(gameboard[irow][icol]->getcolor()==color)&&(gameboard[irow][icol]->getunit()=='K'))
                {
                    ikrow=irow;
                    ikcol=icol;
                }
            }
        }
        for(int irow=0;irow<8;irow++)
        {
            for(int icol=0;icol<8;icol++)
            {
                if((gameboard[irow][icol]!=0)&&(gameboard[irow][icol]->getcolor()!=color)&&(gameboard[irow][icol]->isleagalmove(irow,icol,ikrow,ikcol,gameboard)))
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool CanMove(char Color)
    {
		for (int irow = 0; irow < 8; irow++)
        {
			for (int icol = 0; icol < 8; icol++)
			{
				if ((gameboard[irow][icol]!= 0)&&(gameboard[irow][icol]->getcolor() == Color))
				{
                    for (int iMoveRow = 0; iMoveRow < 8;iMoveRow++)
                    {
                        for (int iMoveCol = 0; iMoveCol < 8; iMoveCol++)
                        {
                            if (gameboard[irow][icol]->isleagalmove(irow, icol, iMoveRow, iMoveCol, gameboard))
                            {
                                unit* qpTemp					= gameboard[iMoveRow][iMoveCol];
                                gameboard[iMoveRow][iMoveCol]	= gameboard[irow][icol];
                                gameboard[irow][icol]			= 0;
                                bool bCanMove = !ischeck(Color);
                                gameboard[irow][icol]			= gameboard[iMoveRow][iMoveCol];
                                gameboard[iMoveRow][iMoveCol]	= qpTemp;
                                if (bCanMove) {
                                    return true;
                                }
                            }
                        }
                    }
                }

			}
		}
		return false;
	}
};
class game
{
public:
    int iStartMove,iStartRow,iStartCol,iEndMove,iEndRow,iEndCol;
	board mqGameBoard;
	char mcPlayerTurn;
    game() : mcPlayerTurn('W') {}
	~game() {}

	void Start()
	{
		do
		{
			GetNextMove(mqGameBoard.gameboard);
			AlternateTurn();
		} while (!IsGameOver());
		mqGameBoard.print();
	}

	void GetNextMove(unit* qaaBoard[8][8])
	{
		bool bValidMove	= false;
		do
		{
			mqGameBoard.print();
			cout << mcPlayerTurn << "'s Move: ";
			cin >> iStartMove;
			iStartRow = (iStartMove / 10) - 1;
			iStartCol = (iStartMove % 10) - 1;

			cout << "To: ";
			cin >> iEndMove;
			iEndRow = (iEndMove / 10) - 1;
			iEndCol = (iEndMove % 10) - 1;

			if ((iStartRow >= 0 && iStartRow <= 7) && (iStartCol >= 0 && iStartCol <= 7) && (iEndRow >= 0 && iEndRow <= 7) && (iEndCol >= 0 && iEndCol <= 7))
            {
				unit* qpCurrPiece = qaaBoard[iStartRow][iStartCol];
				if ((qpCurrPiece != 0) && (qpCurrPiece->getcolor() == mcPlayerTurn))
				{
					if (qpCurrPiece->isleagalmove(iStartRow, iStartCol, iEndRow, iEndCol, qaaBoard))
					{
						unit* qpTemp					= qaaBoard[iEndRow][iEndCol];
						qaaBoard[iEndRow][iEndCol]		= qaaBoard[iStartRow][iStartCol];
						qaaBoard[iStartRow][iStartCol]	= 0;
						if (!mqGameBoard.ischeck(mcPlayerTurn))
						{
							delete qpTemp;
							bValidMove = true;
						}
						else
						{
							qaaBoard[iStartRow][iStartCol] = qaaBoard[iEndRow][iEndCol];
							qaaBoard[iEndRow][iEndCol]		= qpTemp;
						}
					}
				}
			}
			if (!bValidMove)
            {
				cout << "Invalid Move!" << endl;
			}
		} while (!bValidMove);
	}

	void AlternateTurn()
	{
		mcPlayerTurn = (mcPlayerTurn == 'W') ? 'B' : 'W';
	}

	bool IsGameOver()
	{
		bool bCanMove=false;
		bCanMove = mqGameBoard.CanMove(mcPlayerTurn);
		if (!bCanMove)
		{
			if (mqGameBoard.ischeck(mcPlayerTurn))
			{
				AlternateTurn();
				cout << "Checkmate, " << mcPlayerTurn << " Wins!" << endl;
			} else {
				cout << "Stalemate!" << endl;
			}
		}
		return !bCanMove;
	}
};
int main()
{
    game newgame;
    newgame.Start();
    return 0;
}
