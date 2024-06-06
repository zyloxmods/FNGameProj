#include "FortChallengeBundleProgressTrackerToken.h"

UFortChallengeBundleProgressTrackerToken::UFortChallengeBundleProgressTrackerToken(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    ProfileType = EItemProfileType::Common;
    ItemType = EFortItemType::ChallengeBundleCompletionToken;
}

