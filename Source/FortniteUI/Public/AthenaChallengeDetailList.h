#pragma once
#include "CoreMinimal.h"
#include "AthenaChallengeDetailBase.h"
#include "AthenaChallengeDetailList.generated.h"

class UAthenaChallengeSetListView;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaChallengeDetailList : public UAthenaChallengeDetailBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipItemDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressItemDisplay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeSetListView* ChallengeListView_SetContents;
    
public:
    UAthenaChallengeDetailList();
};

