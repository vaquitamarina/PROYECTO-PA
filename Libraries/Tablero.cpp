#include "Tablero.h"

using namespace std;

clsTablero::clsTablero(){
    // clsPeon peon1(0,1,'b');
    // peon1.setSprite("./Images/Sprites/peon.png");
    // // clsPieza peon2(0,1,'b');
    // // clsPieza peon3(0,1,'b');
    // // clsPieza peon4(0,1,'b');
    // // clsPieza peon5(0,1,'b');
    // // clsPieza peon6(0,1,'b');
    // // clsPieza peon7(0,1,'b');
    // // clsPieza peon8(0,1,'b');
    // clsPeon peon1n(0,1,'n');
    // peon1n.setSprite("./Images/Sprites/peon_alt.png");
    // clsPieza peon2n(0,1,'n');
    // clsPieza peon3n(0,1,'n');
    // clsPieza peon4n(0,1,'n');
    // clsPieza peon5n(0,1,'n');
    // clsPieza peon6n(0,1,'n');
    // clsPieza peon7n(0,1,'n');
    // clsPieza peon8n(0,1,'n');
    // pieza = new clsPeon(0,0,'n');
    // pieza->setSprite("./Images/Sprites/peon_alt.png");

    // matrizCasilla[1][1] = new clsCasilla(100,100);
    // matrizCasilla[1][1]->setPieza(pieza);

}
// void clsTablero::setPiezas(clsPieza *p[]){
// }

//     clsCasilla a1;   
//     clsCasilla a2;
//     clsCasilla a3;
//     clsCasilla a4;
//     clsCasilla a5;
//     clsCasilla a6;
//     clsCasilla a7;
//     clsCasilla a8;
//     clsCasilla b1;
//     clsCasilla b2;
//     clsCasilla b3;
//     clsCasilla b4;
//     clsCasilla b5;
//     clsCasilla b6;
//     clsCasilla b7;
//     clsCasilla b8;
//     clsCasilla c1;
//     clsCasilla c2;
//     clsCasilla c3;
//     clsCasilla c4;
//     clsCasilla c5;
//     clsCasilla c6;
//     clsCasilla c7;
//     clsCasilla c8;
//     clsCasilla d1;
//     clsCasilla d2;
//     clsCasilla d3;
//     clsCasilla d4;
//     clsCasilla d5;
//     clsCasilla d6;
//     clsCasilla d7;
//     clsCasilla d8;
//     clsCasilla e1;
//     clsCasilla e2;
//     clsCasilla e3;
//     clsCasilla e4;
//     clsCasilla e5;
//     clsCasilla e6;
//     clsCasilla e7;
//     clsCasilla e8;
//     clsCasilla f1;
//     clsCasilla f2;
//     clsCasilla f3;
//     clsCasilla f4;
//     clsCasilla f5;
//     clsCasilla f6;
//     clsCasilla f7;
//     clsCasilla f8;
//     clsCasilla g1;
//     clsCasilla g2;
//     clsCasilla g3;
//     clsCasilla g4;
//     clsCasilla g5;
//     clsCasilla g6;
//     clsCasilla g7;
//     clsCasilla g8;
//     clsCasilla h1;
//     clsCasilla h2;
//     clsCasilla h3;
//     clsCasilla h4;
//     clsCasilla h5;
//     clsCasilla h6;
//     clsCasilla h7;
//     clsCasilla h8;

    
//     a2.setPieza(&peon1);
//     b2.setPieza(&peon2);
//     c2.setPieza(&peon3);
//     d2.setPieza(&peon4);
//     e2.setPieza(&peon5);
//     f2.setPieza(&peon6);
//     g2.setPieza(&peon7);
//     h2.setPieza(&peon8);

//     a7.setPieza(&peon1);
//     b7.setPieza(&peon2);
//     c7.setPieza(&peon3);
//     d7.setPieza(&peon4);
//     e7.setPieza(&peon5);
//     f7.setPieza(&peon6);
//     g7.setPieza(&peon7);
//     h7.setPieza(&peon8);
//     matrizCasilla[7][0] = a1;
//     matrizCasilla[7][1] = b1;
//     matrizCasilla[7][2] = c1;
//     matrizCasilla[7][3] = d1;
//     matrizCasilla[7][4] = e1;
//     matrizCasilla[7][5] = f1;
//     matrizCasilla[7][6] = g1;
//     matrizCasilla[7][7] = h1;
//     matrizCasilla[6][0] = a2;
//     matrizCasilla[6][1] = b2;
//     matrizCasilla[6][2] = c2;
//     matrizCasilla[6][3] = d2;
//     matrizCasilla[6][4] = e2;
//     matrizCasilla[6][5] = f2;
//     matrizCasilla[6][6] = g2;
//     matrizCasilla[6][7] = h2;
//     matrizCasilla[5][0] = a3;
//     matrizCasilla[5][1] = b3;
//     matrizCasilla[5][2] = c3;
//     matrizCasilla[5][3] = d3;
//     matrizCasilla[5][4] = e3;
//     matrizCasilla[5][5] = f3;
//     matrizCasilla[5][6] = g3;
//     matrizCasilla[5][7] = h3;
//     matrizCasilla[4][0] = a4;
//     matrizCasilla[4][1] = b4;
//     matrizCasilla[4][2] = c4;
//     matrizCasilla[4][3] = d4;
//     matrizCasilla[4][4] = e4;
//     matrizCasilla[4][5] = f4;
//     matrizCasilla[4][6] = g4;
//     matrizCasilla[4][7] = h4;
//     matrizCasilla[3][0] = a5;
//     matrizCasilla[3][1] = b5;
//     matrizCasilla[3][2] = c5;
//     matrizCasilla[3][3] = d5;
//     matrizCasilla[3][4] = e5;
//     matrizCasilla[3][5] = f5;
//     matrizCasilla[3][6] = g5;
//     matrizCasilla[3][7] = h5;
//     matrizCasilla[2][0] = a6;
//     matrizCasilla[2][1] = b6;
//     matrizCasilla[2][2] = c6;
//     matrizCasilla[2][3] = d6;
//     matrizCasilla[2][4] = e6;
//     matrizCasilla[2][5] = f6;
//     matrizCasilla[2][6] = g6;
//     matrizCasilla[2][7] = h6;
//     matrizCasilla[1][0] = a7;
//     matrizCasilla[1][1] = b7;
//     matrizCasilla[1][2] = c7;
//     matrizCasilla[1][3] = d7;
//     matrizCasilla[1][4] = e7;
//     matrizCasilla[1][5] = f7;
//     matrizCasilla[1][6] = g7;
//     matrizCasilla[1][7] = h7;
//     matrizCasilla[0][0] = a8;
//     matrizCasilla[0][1] = b8;
//     matrizCasilla[0][2] = c8;
//     matrizCasilla[0][3] = d8;
//     matrizCasilla[0][4] = e8;
//     matrizCasilla[0][5] = f8;
//     matrizCasilla[0][6] = g8;
//     matrizCasilla[0][7] = h8;
// }   

// // void clsTablero::mostrarTablero(){
// //     cout<<"///////       ///////       ///////       ///////       "<<endl;
// //     cout<<"///////       ///////       ///////       ///////       "<<endl;
// //     cout<<"///////       ///////       ///////       ///////       "<<endl;
// //     cout<<"       ///////       ///////       ///////       ///////"<<endl;
// //     cout<<"       ///////       ///////       ///////       ///////"<<endl;
// //     cout<<"       ///////       ///////       ///////       ///////"<<endl;
// //     cout<<"///////       ///////       ///////       ///////       "<<endl;
// //     cout<<"///////       ///////       ///////       ///////       "<<endl;
// //     cout<<"///////       ///////       ///////       ///////       "<<endl;
// //     cout<<"       ///////       ///////       ///////       ///////"<<endl;
// //     cout<<"       ///////       ///////       ///////       ///////"<<endl;
// //     cout<<"       ///////       ///////       ///////       ///////"<<endl;
// //     cout<<"///////       ///////       ///////       ///////       "<<endl;
// //     cout<<"///////       ///////       ///////       ///////       "<<endl;
// //     cout<<"///////       ///////       ///////       ///////       "<<endl;
// //     cout<<"       ///////       ///////       ///////       ///////"<<endl;
// //     cout<<"       ///////       ///////       ///////       ///////"<<endl;
// //     cout<<"       ///////       ///////       ///////       ///////"<<endl;
// //     cout<<"///////       ///////       ///////       ///////       "<<endl;
// //     cout<<"///"<<matrizCasilla[0][1].getFigura()<<"///   "<<matrizCasilla[1][1].getFigura()<<"    ///"<<matrizCasilla[2][1].getFigura()<<"///   "<<matrizCasilla[1][1].getFigura()<<"    ///"<<matrizCasilla[1][1].getFigura()<<"///   "<<matrizCasilla[1][1].getFigura()<<"    ///"<<matrizCasilla[1][1].getFigura()<<"///   "<<matrizCasilla[1][1].getFigura()<<"    "<<endl;
// //     cout<<"///////       ///////       ///////       ///////       "<<endl;
// //     cout<<"       ///////       ///////       ///////       ///////"<<endl;
// //     cout<<"       ///////       ///////       ///////       ///////"<<endl;
// //     cout<<"       ///////       ///////       ///////       ///////"<<endl;
// // }

void clsTablero::mostrarTablero(){
//     for(int i=0; i<8; i++){
//              if(i%2 == 0){
//                     cout<<"///////       ///////       ///////       ///////       "<<endl;
//                     cout<<"///"<<matrizCasilla[i][0].getFigura(true)<<"///   "<<matrizCasilla[i][1].getFigura(false)<<"   ///"<<matrizCasilla[i][2].getFigura(true)<<"///   "<<matrizCasilla[i][3].getFigura(false)<<"   ///"<<matrizCasilla[i][4].getFigura(true)<<"///   "<<matrizCasilla[i][5].getFigura(false)<<"   ///"<<matrizCasilla[i][6].getFigura(true)<<"///   "<<matrizCasilla[i][7].getFigura(false)<<"   "<<endl;
//                     cout<<"///////       ///////       ///////       ///////       "<<endl;
//                 }
//                 else{
//                     cout<<"       ///////       ///////       ///////       ///////"<<endl;
//                     cout<<"   "<<matrizCasilla[i][0].getFigura(false)<<"   ///"<<matrizCasilla[i][1].getFigura(true)<<"///   "<<matrizCasilla[i][2].getFigura(false)<<"   ///"<<matrizCasilla[i][3].getFigura(true)<<"///   "<<matrizCasilla[i][4].getFigura(false)<<"   ///"<<matrizCasilla[i][5].getFigura(true)<<"///   "<<matrizCasilla[i][6].getFigura(false)<<"   ///"<<matrizCasilla[i][7].getFigura(true)<<"///"<<endl;
//                     cout<<"       ///////       ///////       ///////       ///////"<<endl;
//                 }
//         }
}