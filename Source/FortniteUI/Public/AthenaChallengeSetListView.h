#pragma once
#include "CoreMinimal.h"
#include "AthenaChallengeListViewBase.h"
#include "AthenaChallengeListVisualOptions.h"
#include "Templates/SubclassOf.h"
#include "AthenaChallengeSetListView.generated.h"

class UAthenaChallengeListEntry_CompletionReward;
class UAthenaChallengeListEntry_Header;
class UAthenaChallengeListEntry_StoreOffer;

UCLASS(Blueprintable)
class UAthenaChallengeSetListView : public UAthenaChallengeListViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaChallengeListVisualOptions ListVisualOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideHeaders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideCompletionRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideQuestRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCompactActionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowFocus;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaChallengeListEntry_Header> SectionHeaderEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaChallengeListEntry_CompletionReward> CompletionRewardEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaChallengeListEntry_StoreOffer> SpecialOfferEntryClass;
    
public:
    UAthenaChallengeSetListView();
};

