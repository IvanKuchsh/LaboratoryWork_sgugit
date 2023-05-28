#include "option.h"

Option::Option() {};

void Option::ChooseOption(double option)
{
    option_ = option;
}
//-----------------------------------------------------------------------------
void Option::CalcBack1Ch() {
    if (1656 + option_ * 2 > 2990) {
        back1Ch_ = (1656 + option_ * 2) - ((qRound(static_cast<double>((1656 + option_ * 2)) / 2990) * 2990));
        back1Ch_ = abs(back1Ch_);
        back1Ch_ += 30;
    } else {
        back1Ch_ = 1656 + option_ * 2;
    }
}
void Option::CalcFront1Ch() {
    double tmp = (back1Ch_ - 718 * option_ * 2);

    if (abs(tmp) > 2990) {
        front1Ch_ = (abs(abs(back1Ch_ - 718 * option_ * 2) -
                         (qRound(abs(static_cast<double>(back1Ch_ - 718 * option_ * 2)) / 2990)) * 2990)) + 30;
    } else {
        front1Ch_ = (back1Ch_ - 718 * option_ * 2) + 30;
    }
}
double Option::GetBack1Ch() {
    return back1Ch_;
}
double Option::GetFront1Ch() {
    return front1Ch_;
}
double Option::GetOption() {
    return option_;
}
void Option::CalcBack1K() {
    back1K_ = back1Ch_ + 4683;
}
void Option::CalcFront1K() {
    front1K_ = front1Ch_ + 4783;
}
double Option::GetBack1K() {
    return back1K_;
}
double Option::GetFront1K() {
    return front1K_;
}
void Option::CalcBack1Result() {
    back1Result_ = back1K_ - back1Ch_;
}
void Option::CalcFront1Result() {
    front1Result_ = front1K_ - front1Ch_;
}
double Option::GetBack1Result() {
    return back1Result_;
}
double Option::GetFront1Result() {
    return front1Result_;
}
void Option::CalcExcess1Ch() {
    excess1Ch_ = back1Ch_ - front1Ch_;
};
void Option::CalcExcess1K() {
    excess1K_ = back1K_ - front1K_;
};
void Option::CalcExcess1Result() {
    excess1Result_ = front1Result_ - back1Result_;
};
void Option::CalcAverageExceedances1() {
    averageExceedances1_ = (excess1Ch_ + excess1K_ + excess1Result_) / 2;
};
double Option::GetExcess1Ch() {
    return excess1Ch_;
};
double Option::GetExcess1K() {
    return excess1K_;
};
double Option::GetExcess1Result() {
    return excess1Result_;
};
double Option::GetAverageExceedances1() {
    return averageExceedances1_;
};
//-----------------------------------------------------------------------------
void Option::CalcBack2Ch() {
    back2Ch_ = back1Ch_ - 1688;
}
void Option::CalcFront2Ch() {
    double tmp = abs(back2Ch_ - 718 * option_ * 2);
    if (tmp > 2990) {
        front2Ch_ = abs(tmp - qRound(tmp / 2990) * 2990) + 30;
    } else {
        front2Ch_ = tmp + 30;
    }
}
double Option::GetBack2Ch() {
    return back2Ch_;
}
double Option::GetFront2Ch() {
    return front2Ch_;
}
void Option::CalcBack2K() {
    back2K_ = back2Ch_ + 4783;
}
void Option::CalcFront2K() {
    front2K_ = front2Ch_ + (5635 - 948);
}
double Option::GetBack2K() {
    return back2K_;
}
double Option::GetFront2K() {
    return front2K_;
}
void Option::CalcBack2Result() {
    back2Result_ = back2K_ - back2Ch_;
}
void Option::CalcFront2Result() {
    front2Result_ = front2K_ - front2Ch_;
}
double Option::GetBack2Result() {
    return back2Result_;
}
double Option::GetFront2Result() {
    return front2Result_;
}
void Option::CalcExcess2Ch() {
    excess2Ch_ = back2Ch_ - front2Ch_;
};
void Option::CalcExcess2K() {
    excess2K_ = back2K_ - front2K_;
};
void Option::CalcExcess2Result() {
    excess2Result_ = front2Result_ - back2Result_;
};
void Option::CalcAverageExceedances2() {
    averageExceedances2_ = (excess2Ch_ + excess2K_ + excess2Result_) / 2;
};
double Option::GetExcess2Ch() {
    return excess2Ch_;
};
double Option::GetExcess2K() {
    return excess2K_;
};
double Option::GetExcess2Result() {
    return excess2Result_;
};
double Option::GetAverageExceedances2() {
    return averageExceedances2_;
};
//-----------------------------------------------------------------------------
void Option::CalcBack3Ch() {
    back3Ch_ = back2Ch_ + 755;
}
void Option::CalcFront3Ch() {
    double tmp = abs(back3Ch_ - 718 * option_ * 2);
    if (tmp > 2990) {
        front3Ch_ = abs(tmp - qRound(tmp / 2990) * 2990) + 30;
    } else {
        front3Ch_ = tmp + 30;
    }
}
double Option::GetBack3Ch() {
    return back3Ch_;
}
double Option::GetFront3Ch() {
    return front3Ch_;
}
void Option::CalcBack3K() {
    back3K_ = back3Ch_ + 4685;
}
void Option::CalcFront3K() {
    front3K_ = front3Ch_ + (4978 - 193);
}
double Option::GetBack3K() {
    return back3K_;
}
double Option::GetFront3K() {
    return front3K_;
}
void Option::CalcBack3Result() {
    back3Result_ = back3K_ - back3Ch_;
}
void Option::CalcFront3Result() {
    front3Result_ = front3K_ - front3Ch_;
}
double Option::GetBack3Result() {
    return back3Result_;
}
double Option::GetFront3Result() {
    return front3Result_;
}
void Option::CalcExcess3Ch() {
    excess3Ch_ = back3Ch_ - front3Ch_;
};
void Option::CalcExcess3K() {
    excess3K_ = back3K_ - front3K_;
};
void Option::CalcExcess3Result() {
    excess3Result_ = front3Result_ - back3Result_;
};
void Option::CalcAverageExceedances3() {
    averageExceedances3_ = (excess3Ch_ + excess3K_ + excess3Result_) / 2;
};
double Option::GetExcess3Ch() {
    return excess3Ch_;
};
double Option::GetExcess3K() {
    return excess3K_;
};
double Option::GetExcess3Result() {
    return excess3Result_;
};
double Option::GetAverageExceedances3() {
    return averageExceedances3_;
};
//-----------------------------------------------------------------------------
void Option::CalcBack4Ch() {
    back4Ch_ = back3Ch_ + (1268 - 983);
}
void Option::CalcFront4Ch() {
    double tmp = abs(back4Ch_ - 718 * option_ * 2);
    if (tmp > 2990) {
        front4Ch_ = abs(tmp - qRound(tmp / 2990) * 2990) + 30;
    } else {
        front4Ch_ = tmp + 30;
    }
}
double Option::GetBack4Ch() {
    return back4Ch_;
}
double Option::GetFront4Ch() {
    return front4Ch_;
}
void Option::CalcBack4K() {
    back4K_ = back4Ch_ + (6048 - 1268);
}
void Option::CalcFront4K() {
    front4K_ = front4Ch_ + ( 6177 - 1496);
}
double Option::GetBack4K() {
    return back4K_;
}
double Option::GetFront4K() {
    return front4K_;
}
void Option::CalcBack4Result() {
    back4Result_ = back4K_ - back4Ch_;
}
void Option::CalcFront4Result() {
    front4Result_ = front4K_ - front4Ch_;
}
double Option::GetBack4Result() {
    return back4Result_;
}
double Option::GetFront4Result() {
    return front4Result_;
}
void Option::CalcExcess4Ch() {
    excess4Ch_ = back4Ch_ - front4Ch_;
};
void Option::CalcExcess4K() {
    excess4K_ = back4K_ - front4K_;
};
void Option::CalcExcess4Result() {
    excess4Result_ = front4Result_ - back4Result_;
};
void Option::CalcAverageExceedances4() {
    averageExceedances4_ = (excess4Ch_ + excess4K_ + excess4Result_) / 2;
};
double Option::GetExcess4Ch() {
    return excess4Ch_;
};
double Option::GetExcess4K() {
    return excess4K_;
};
double Option::GetExcess4Result() {
    return excess4Result_;
};
double Option::GetAverageExceedances4() {
    return averageExceedances4_;
};
//-----------------------------------------------------------------------------
void Option::CalcBack5Ch() {
    back5Ch_ = back4Ch_- (1268 - 357);
}
void Option::CalcFront5Ch() {
    double tmp = abs(back5Ch_ - 718 * option_ * 2);
    if (tmp > 2990) {
        front5Ch_ = abs(tmp - qRound(tmp / 2990) * 2990) + 30;
    } else {
        front5Ch_ = tmp + 30;
    }
}
double Option::GetBack5Ch() {
    return back5Ch_;
}
double Option::GetFront5Ch() {
    return front5Ch_;
}
void Option::CalcBack5K() {
    back5K_ = back5Ch_+ (5040 - 357);
}
void Option::CalcFront5K() {
    front5K_ = front5Ch_+ (5427 - 643);
}
double Option::GetBack5K() {
    return back5K_;
}
double Option::GetFront5K() {
    return front5K_;
}
void Option::CalcBack5Result() {
    back5Result_ = back5K_ - back5Ch_;
}
void Option::CalcFront5Result() {
    front5Result_ = front5K_ - front5Ch_;
}
double Option::GetBack5Result() {
    return back5Result_;
}
double Option::GetFront5Result() {
    return front5Result_;
}
void Option::CalcExcess5Ch() {
    excess5Ch_ = back5Ch_ - front5Ch_;
};
void Option::CalcExcess5K() {
    excess5K_ = back5K_ - front5K_;
};
void Option::CalcExcess5Result() {
    excess5Result_ = front5Result_ - back5Result_;
};
void Option::CalcAverageExceedances5() {
    averageExceedances5_ = (excess5Ch_ + excess5K_ + excess5Result_) / 2;
};
double Option::GetExcess5Ch() {
    return excess5Ch_;
};
double Option::GetExcess5K() {
    return excess5K_;
};
double Option::GetExcess5Result() {
    return excess5Result_;
};
double Option::GetAverageExceedances5() {
    return averageExceedances5_;
};
//-----------------------------------------------------------------------------
void Option::CalcBack6Ch() {
    back6Ch_ = back5Ch_ + 120;
}
void Option::CalcFront6Ch() {
    double tmp = abs(back6Ch_ - 718 * option_ * 2);
    if (tmp > 2990) {
        front6Ch_ = abs(tmp - qRound(tmp / 2990) * 2990) + 30;
    } else {
        front6Ch_ = tmp + 30;
    }
}
double Option::GetBack6Ch() {
    return back6Ch_;
}
double Option::GetFront6Ch() {
    return front6Ch_;
}
void Option::CalcBack6K() {
    back6K_ = back6Ch_ + (5261 - 477);
}
void Option::CalcFront6K() {
    front6K_ = front6Ch_ + (5449 - 763);
}
double Option::GetBack6K() {
    return back6K_;
}
double Option::GetFront6K() {
    return front6K_;
}
void Option::CalcBack6Result() {
    back6Result_ = back6K_ - back6Ch_;
}
void Option::CalcFront6Result() {
    front6Result_ = front6K_ - front6Ch_;
}
double Option::GetBack6Result() {
    return back6Result_;
}
double Option::GetFront6Result() {
    return front6Result_;
}
void Option::CalcExcess6Ch() {
    excess6Ch_ = back6Ch_ - front6Ch_;
};
void Option::CalcExcess6K() {
    excess6K_ = back6K_ - front6K_;
};
void Option::CalcExcess6Result() {
    excess6Result_ = front6Result_ - back6Result_;
};
void Option::CalcAverageExceedances6() {
    averageExceedances6_ = (excess6Ch_ + excess6K_ + excess6Result_) / 2;
};
double Option::GetExcess6Ch() {
    return excess6Ch_;
};
double Option::GetExcess6K() {
    return excess6K_;
};
double Option::GetExcess6Result() {
    return excess6Result_;
};
double Option::GetAverageExceedances6() {
    return averageExceedances6_;
};
//-----------------------------------------------------------------------------
void Option::CalcBack7Ch() {
    back7Ch_ = back6Ch_ + (2171 - 477);
}
void Option::CalcFront7Ch() {
    double tmp = abs(back7Ch_ - 718 * option_ * 2);
    if (tmp > 2990) {
        front7Ch_ = abs(tmp - qRound(tmp / 2990) * 2990) + 30;
    } else {
        front7Ch_ = tmp + 30;
    }
}
double Option::GetBack7Ch() {
    return back7Ch_;
}
double Option::GetFront7Ch() {
    return front7Ch_;
}
void Option::CalcBack7K() {
    back7K_ = back7Ch_ + (6854 - 2171);
}
void Option::CalcFront7K() {
    front7K_ = front7Ch_ + (5378 - 593);
}
double Option::GetBack7K() {
    return back7K_;
}
double Option::GetFront7K() {
    return front7K_;
}
void Option::CalcBack7Result() {
    back7Result_ = back7K_ - back7Ch_;
}
void Option::CalcFront7Result() {
    front7Result_ = front7K_ - front7Ch_;
}
double Option::GetBack7Result() {
    return back7Result_;
}
double Option::GetFront7Result() {
    return front7Result_;
}
void Option::CalcExcess7Ch() {
    excess7Ch_ = back7Ch_ - front7Ch_;
};
void Option::CalcExcess7K() {
    excess7K_ = back7K_ - front7K_;
};
void Option::CalcExcess7Result() {
    excess7Result_ = front7Result_ - back7Result_;
};
void Option::CalcAverageExceedances7() {
    averageExceedances7_ = (excess7Ch_ + excess7K_ + excess7Result_) / 2;
};
double Option::GetExcess7Ch() {
    return excess7Ch_;
};
double Option::GetExcess7K() {
    return excess7K_;
};
double Option::GetExcess7Result() {
    return excess7Result_;
};
double Option::GetAverageExceedances7() {
    return averageExceedances7_;
};
//-----------------------------------------------------------------------------
void Option::CalcBack8Ch() {
    back8Ch_ = back7Ch_ + (2821 - 2171);
}
void Option::CalcFront8Ch() {
    double tmp = abs(back8Ch_ - 718 * option_ * 2);
    if (tmp > 2990) {
        front8Ch_ = abs(tmp - qRound(tmp / 2990) * 2990) + 30;
    } else {
        front8Ch_ = tmp + 30;
    }
}
double Option::GetBack8Ch() {
    return back8Ch_;
}
double Option::GetFront8Ch() {
    return front8Ch_;
}
void Option::CalcBack8K() {
    back8K_ = back8Ch_ + (7601 - 2821);
}
void Option::CalcFront8K() {
    front8K_ = front8Ch_ + (4798 - 117);
}
double Option::GetBack8K() {
    return back8K_;
}
double Option::GetFront8K() {
    return front8K_;
}
void Option::CalcBack8Result() {
    back8Result_ = back8K_ - back8Ch_;
}
void Option::CalcFront8Result() {
    front8Result_ = front8K_ - front8Ch_;
}
double Option::GetBack8Result() {
    return back8Result_;
}
double Option::GetFront8Result() {
    return front8Result_;
}
void Option::CalcExcess8Ch() {
    excess8Ch_ = back8Ch_ - front8Ch_;
};
void Option::CalcExcess8K() {
    excess8K_ = back8K_ - front8K_;
};
void Option::CalcExcess8Result() {
    excess8Result_ = front8Result_ - back8Result_;
};
void Option::CalcAverageExceedances8() {
    averageExceedances8_ = (excess8Ch_ + excess8K_ + excess8Result_) / 2;
};
double Option::GetExcess8Ch() {
    return excess8Ch_;
};
double Option::GetExcess8K() {
    return excess8K_;
};
double Option::GetExcess8Result() {
    return excess8Result_;
};
double Option::GetAverageExceedances8() {
    return averageExceedances8_;
};
//-----------------------------------------------------------------------------
void Option::CalcBack9Ch() {
    back9Ch_ = back8Ch_ - (2821 - 2323);
}
void Option::CalcFront9Ch() {
    double tmp = abs(back9Ch_ - 718 * option_ * 2);
    if (tmp > 2990) {
        front9Ch_ = abs(tmp - qRound(tmp / 2990) * 2990) + 30;
    } else {
        front9Ch_ = tmp + 30;
    }
}
double Option::GetBack9Ch() {
    return back9Ch_;
}
double Option::GetFront9Ch() {
    return front9Ch_;
}
void Option::CalcBack9K() {
    back9K_ = back9Ch_ + (7003 - 2323);
}
void Option::CalcFront9K() {
    front9K_ = front9Ch_ + (5221 - 441);
}
double Option::GetBack9K() {
    return back9K_;
}
double Option::GetFront9K() {
    return front9K_;
}
void Option::CalcBack9Result() {
    back9Result_ = back9K_ - back9Ch_;
}
void Option::CalcFront9Result() {
    front9Result_ = front9K_ - front9Ch_;
}
double Option::GetBack9Result() {
    return back9Result_;
}
double Option::GetFront9Result() {
    return front9Result_;
}
void Option::CalcExcess9Ch() {
    excess9Ch_ = back9Ch_ - front9Ch_;
};
void Option::CalcExcess9K() {
    excess9K_ = back9K_ - front9K_;
};
void Option::CalcExcess9Result() {
    excess9Result_ = front9Result_ - back9Result_;
};
void Option::CalcAverageExceedances9() {
    averageExceedances9_ = (excess9Ch_ + excess9K_ + excess9Result_) / 2;
};
double Option::GetExcess9Ch() {
    return excess9Ch_;
};
double Option::GetExcess9K() {
    return excess9K_;
};
double Option::GetExcess9Result() {
    return excess9Result_;
};
double Option::GetAverageExceedances9() {
    return averageExceedances9_;
};
//-----------------------------------------------------------------------------
void Option::CalcBack10Ch() {
    back10Ch_ = back9Ch_ - (2323 - 1256);
}
void Option::CalcFront10Ch() {
    double tmp = abs(back10Ch_ - 718 * option_ * 2);
    if (tmp > 2990) {
        front10Ch_ = abs(tmp - qRound(tmp / 2990) * 2990) + 30;
    } else {
        front10Ch_ = tmp + 30;
    }
}
double Option::GetBack10Ch() {
    return back10Ch_;
}
double Option::GetFront10Ch() {
    return front10Ch_;
}
void Option::CalcBack10K() {
    back10K_ = back10Ch_ + (6038 - 1256);
}
void Option::CalcFront10K() {
    front10K_ = front10Ch_ + 4682;
}
double Option::GetBack10K() {
    return back10K_;
}
double Option::GetFront10K() {
    return front10K_;
}
void Option::CalcBack10Result() {
    back10Result_ = back10K_ - back10Ch_;
}
void Option::CalcFront10Result() {
    front10Result_ = front10K_ - front10Ch_;
}
double Option::GetBack10Result() {
    return back10Result_;
}
double Option::GetFront10Result() {
    return front10Result_;
}
void Option::CalcExcess10Ch() {
    excess10Ch_ = back10Ch_ - front10Ch_;
};
void Option::CalcExcess10K() {
    excess10K_ = back10K_ - front10K_;
};
void Option::CalcExcess10Result() {
    excess10Result_ = front10Result_ - back10Result_;
};
void Option::CalcAverageExceedances10() {
    averageExceedances10_ = (excess10Ch_ + excess10K_ + excess10Result_) / 2;
};
double Option::GetExcess10Ch() {
    return excess10Ch_;
};
double Option::GetExcess10K() {
    return excess10K_;
};
double Option::GetExcess10Result() {
    return excess10Result_;
};
double Option::GetAverageExceedances10() {
    return averageExceedances10_;
};
//-----------------------------------------------------------------------------
void Option::CalcAllBack1() {
    allBack1_ = back1Ch_ + back1K_ + back2Ch_ + back2K_ +
                back3Ch_ + back3K_ + back4Ch_ + back4K_ + back5Ch_ + back5K_;
};
double Option::GetAllBack1() {
    return allBack1_;
};
void Option::CalcAllFront1() {
    allFront1_ = front1Ch_ + front1K_ + front2Ch_ + front2K_ +
                 front3Ch_ + front3K_ + front4Ch_ + front4K_ + front5Ch_ + front5K_;
};
double Option::GetAllFront1() {
    return allFront1_;
};
void Option::CalcAllExcess1() {
    allExcess1_ = excess1Ch_ + excess1K_ + excess2Ch_ + excess2K_ + excess3Ch_ + excess3K_
                  + excess4Ch_ + excess4K_ + excess5Ch_ + excess5K_;
};
double Option::GetAllExcess1() {
    return allExcess1_;
};
void Option::CalcAllAverageExceedances1() {
    allAverageExceedances1_ = averageExceedances1_ + averageExceedances2_ + averageExceedances3_
                              + averageExceedances4_ + averageExceedances5_;
};
double Option::GetAllAverageExceedances1() {
    return allAverageExceedances1_;
};
void Option::CalcTotalBackAndFront1() {
    totalBackAndFront1_ = allBack1_ - allFront1_;
};
double Option::GetTotalBackAndFront1() {
    return totalBackAndFront1_;
};
void Option::CalcTotalAllExcess1() {
    totalAllExcess1_ = allExcess1_ / 2;
};
double Option::GetTotalAllExcess1() {
    return totalAllExcess1_;
};
//-----------------------------------------------------------------------------
void Option::CalcAllBack2() {
    allBack2_ = back6Ch_ + back6K_ + back7Ch_ + back7K_ +
                back8Ch_ + back8K_ + back9Ch_ + back9K_ + back10Ch_ + back10K_;
};
double Option::GetAllBack2() {
    return allBack2_;
};
void Option::CalcAllFront2() {
    allFront2_ = front6Ch_ + front6K_ + front7Ch_ + front7K_ +
                 front8Ch_ + front8K_ + front9Ch_ + front9K_ + front10Ch_ + front10K_;
};
double Option::GetAllFront2() {
    return allFront2_;
};
void Option::CalcAllExcess2() {
    allExcess2_ = excess6Ch_ + excess6K_ + excess7Ch_ + excess7K_ + excess8Ch_ + excess8K_ +
                  excess9Ch_ + excess9K_ + excess10Ch_ + excess10K_;
};
double Option::GetAllExcess2() {
    return allExcess2_;
};
void Option::CalcAllAverageExceedances2() {
    allAverageExceedances2_ = averageExceedances6_ + averageExceedances7_ + averageExceedances8_ +
                              averageExceedances9_ + averageExceedances10_;
};
double Option::GetAllAverageExceedances2() {
    return allAverageExceedances2_;
};
void Option::CalcTotalBackAndFront2() {
    totalBackAndFront2_ = allBack2_ - allFront2_;
};
double Option::GetTotalBackAndFront2() {
    return totalBackAndFront2_;
};
void Option::CalcTotalAllExcess2() {
    totalAllExcess2_ = allExcess2_ / 2;
};
double Option::GetTotalAllExcess2() {
    return totalAllExcess2_;
};
//-----------------------------------------------------------------------------
void Option::CalcTotalAllBack2() {
    totalAllBack2_ = allBack2_ + allBack1_;
};
double Option::GetTotalAllBack2() {
    return totalAllBack2_;
};
void Option::CalcTotalAllFront2() {
    totalAllFront2_ = allFront2_ + allFront1_;
};
double Option::GetTotalAllFront2() {
    return totalAllFront2_;
};
void Option::CalcAllExcess1AndExcess2() {
    allExcess1AndExcess2_ = allExcess2_ + allExcess1_;
};
double Option::GetAllExcess1AndExcess2() {
    return allExcess1AndExcess2_;
};
void Option::CalcTotalAllExcess1AndExcess2() {
    totalAllExcess1AndExcess2_ = allExcess1AndExcess2_ / 2;
};
double Option::GetTotalAllExcess1AndExcess2() {
    return totalAllExcess1AndExcess2_;
};
void Option::CalcTotalAllAverageExceedances2() {
    totalAllAverageExceedances2_ = allAverageExceedances2_ + allAverageExceedances1_;
};
double Option::GetTotalAllAverageExceedances2() {
    return totalAllAverageExceedances2_;
};
//-----------------------------------------------------------------------------
// 50 - 200
void   Option::CalcMeasExceed0() {
    measExceed0_ = averageExceedances1_ / 1000;
};
void   Option::CalcMeasExceed1() {
    measExceed1_ = (averageExceedances2_ + averageExceedances3_) / 1000;
};
void   Option::CalcMeasExceed2() {
    measExceed2_ = averageExceedances4_ / 1000;
};
void   Option::CalcMeasExceed3() {
    measExceed3_ = averageExceedances5_ / 1000;
};
void   Option::CalcMeasExceed4() {
    measExceed4_ = (averageExceedances6_ + averageExceedances7_ + averageExceedances8_) / 1000;
};
void   Option::CalcMeasExceed5() {
    measExceed5_ = averageExceedances9_ / 1000;
};
void   Option::CalcMeasExceed6() {
    measExceed6_ = averageExceedances10_ / 1000;
};
double Option::GetMeasExceed0() {
    return measExceed0_;
};
double Option::GetMeasExceed1() {
    return measExceed1_;
};
double Option::GetMeasExceed2() {
    return measExceed2_;
};
double Option::GetMeasExceed3() {
    return measExceed3_;
};
double Option::GetMeasExceed4() {
    return measExceed4_;
};
double Option::GetMeasExceed5() {
    return measExceed5_;
};
double Option::GetMeasExceed6() {
    return measExceed6_;
};
//-----------------------------------------------------------------------------
void   Option::CalcPointMarker0() {
    pointMarker0_ = option_ + option_ / 1000;
};
void   Option::CalcPointMarker1() {
    pointMarker1_ = pointMarker0_ + equalExceed0_;
};
void   Option::CalcPointMarker2() {
    pointMarker2_ = pointMarker1_ + equalExceed1_;
};
void   Option::CalcPointMarker3() {
    pointMarker3_ = pointMarker2_ + equalExceed2_;
};
void   Option::CalcPointMarker4() {
    pointMarker4_ = pointMarker3_ + equalExceed3_;
};
void   Option::CalcPointMarker5() {
    pointMarker5_ = pointMarker4_ + equalExceed4_;
};
void   Option::CalcPointMarker6() {
    pointMarker6_ = pointMarker5_ + equalExceed5_;
};
void   Option::CalcPointMarker7() {
    pointMarker7_ = pointMarker0_ + (totalAllExcess1AndExcess2_ / 1000);
};
double Option::GetPointMarker0() {
    return pointMarker0_;
};
double Option::GetPointMarker1() {
    return pointMarker1_;
};
double Option::GetPointMarker2() {
    return pointMarker2_;
};
double Option::GetPointMarker3() {
    return pointMarker3_;
};
double Option::GetPointMarker4() {
    return pointMarker4_;
};
double Option::GetPointMarker5() {
    return pointMarker5_;
};
double Option::GetPointMarker6() {
    return pointMarker6_;
};
double Option::GetPointMarker7() {
    return pointMarker7_;
};
//-----------------------------------------------------------------------------
void   Option::CalcTotal1() {
    total1_ = measExceed0_ + measExceed1_ + measExceed2_ + measExceed3_ + measExceed4_ + measExceed5_ + measExceed6_;
};
void   Option::CalcTotal2() {
    total2_ = pointMarker7_ - pointMarker0_;
};
void   Option::CalcTotal3() {
    total3_ = total2_ - total1_;
};
void   Option::CalcTotal4() {
    total4_ = total3_ * 1000;
};
double Option::GetTotal1() {
    return total1_;
};
double Option::GetTotal2() {
    return total2_;
};
double Option::GetTotal3() {
    return total3_;
};
double Option::GetTotal4() {
    return total4_;
};
//-----------------------------------------------------------------------------
void   Option::CalcAmendment0() {
    amendment0_ = qRound((total4_ / 10 * numberOfStations1_) * 100.0) * 0.01; //(total4_ / 10 * numberOfStations1_);
};
void   Option::CalcAmendment1() {
    amendment1_ = qRound((total4_ / 10 * numberOfStations2_) * 100.0) * 0.01;
};
void   Option::CalcAmendment2() {
    amendment2_ = qRound((total4_ / 10 * numberOfStations3_) * 100.0) * 0.01;
};
void   Option::CalcAmendment3() {
    amendment3_ = qRound((total4_ / 10 * numberOfStations4_) * 100.0) * 0.01;
};
void   Option::CalcAmendment4() {
    amendment4_ = qRound((total4_ / 10 * numberOfStations5_) * 100.0) * 0.01;
};
void   Option::CalcAmendment5() {
    amendment5_ = qRound((total4_ / 10 * numberOfStations6_) * 100.0) * 0.01;
};
void   Option::CalcAmendment6() {
    amendment6_ = qRound((total4_ / 10 * numberOfStations7_) * 100.0) * 0.01;
};
double Option::GetAmendment0() {
    return amendment0_;
};
double Option::GetAmendment1() {
    return amendment1_;
};
double Option::GetAmendment2() {
    return amendment2_;
};
double Option::GetAmendment3() {
    return amendment3_;
};
double Option::GetAmendment4() {
    return amendment4_;
};
double Option::GetAmendment5() {
    return amendment5_;
};
double Option::GetAmendment6() {
    return amendment6_;
};
//-----------------------------------------------------------------------------
void   Option::CalcEqualExceed0() {
    equalExceed0_ = measExceed0_ + (amendment0_ / 1000);
};
void   Option::CalcEqualExceed1() {
    equalExceed1_ = measExceed1_ + (amendment1_ / 1000);
};
void   Option::CalcEqualExceed2() {
    equalExceed2_ = measExceed2_ + (amendment2_ / 1000);
};
void   Option::CalcEqualExceed3() {
    equalExceed3_ = measExceed3_ + (amendment3_ / 1000);
};
void   Option::CalcEqualExceed4() {
    equalExceed4_ = measExceed4_ + (amendment4_ / 1000);
};
void   Option::CalcEqualExceed5() {
    equalExceed5_ = measExceed5_ + (amendment5_ / 1000);
};
void   Option::CalcEqualExceed6() {
    equalExceed6_ = measExceed6_ + (amendment6_ / 1000);
};
double Option::GetEqualExceed0() {
    return equalExceed0_;
};
double Option::GetEqualExceed1() {
    return equalExceed1_;
};
double Option::GetEqualExceed2() {
    return equalExceed2_;
};
double Option::GetEqualExceed3() {
    return equalExceed3_;
};
double Option::GetEqualExceed4() {
    return equalExceed4_;
};
double Option::GetEqualExceed5() {
    return equalExceed5_;
};
double Option::GetEqualExceed6() {
    return equalExceed6_;
};
//-----------------------------------------------------------------------------
