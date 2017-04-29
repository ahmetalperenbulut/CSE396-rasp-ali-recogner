//
// Created by hmenn on 11.04.2017.
//

#ifndef CONSTANTS_H
#define CONSTANTS_H

class Constants{
public:
    /* Request */
    static const int REQ_OPEN_CONNECTION=1;
    static const int REQ_CLOSE_CONNECTION=2;
    static const int REQ_ASK_CURRENT_IMAGE=3;
    static const int REQ_ASK_CURRENT_COORDS=4;
    static const int REQ_UPDATE_COORDS=5;

    /* Messages */
    static const char DELIMITER=',';


    static const int MAX_BUFFER=255;

    /*Connection*/
    static const int PORT=3965;
};

#endif // CONSTANTS_H