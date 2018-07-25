/**
 * Sign header file.
 */
#ifndef REVERSIGAME_SIGN_H
#define REVERSIGAME_SIGN_H

enum SIGN { XSIGN = 'X', OSIGN = 'O', EMPTY = ' '};
class Sign {

public:
    /**
     * setSign.
     * Sets the sign.
     * @param s enum.
     */
    void setSign(SIGN s);
    /**
     * getSign.
     * Returns the sign.
     * @return sign.
     */
    SIGN getSign();
private:
    SIGN sign;
};

#endif //REVERSIGAME_SIGN_H


