//
// Created by hloi on 12/7/2021.
//

#ifndef CSC109CH07131TEMPLATE_REVIEW_H
#define CSC109CH07131TEMPLATE_REVIEW_H

#include <string>
using std::string;

template<typename T1, typename T2>
class Review {
public:
    void SetRatingAndComment(int revRating, string revComment) {
        rating = revRating;
        comment = revComment;
    }
    int GetRating() const { return rating; }
    string GetComment() const { return comment; }
    bool operator<(const Review& other);  // rating comparison
    bool operator==(const Review& other); // compare rating and comment
private:
    int rating = -1;  // T1
    string comment = "NoComment";  //T2
};


#endif //CSC109CH07131TEMPLATE_REVIEW_H
