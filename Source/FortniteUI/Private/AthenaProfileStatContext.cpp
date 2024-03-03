#include "AthenaProfileStatContext.h"

TArray<UAthenaMatchStatView*> UAthenaProfileStatContext::CreateMatchViews(const TArray<FAthenaMatchStats>& InRecentMatches) {
    return TArray<UAthenaMatchStatView*>();
}

UAthenaMatchSetStatView* UAthenaProfileStatContext::CreateMatchStatView(UAthenaSeasonStats* StatSet, FName Bucket) {
    return NULL;
}

UAthenaMatchStatView* UAthenaProfileStatContext::CreateCurrentMatchStatView() {
    return NULL;
}

UAthenaProfileStatContext::UAthenaProfileStatContext() {
}

