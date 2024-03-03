#pragma once
#include "CoreMinimal.h"
#include "AthenaMapNavigableIconStackOfChallenges.h"
#include "AthenaMapNavigableIconStackOfNoLocationChallenges.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaMapNavigableIconStackOfNoLocationChallenges : public UAthenaMapNavigableIconStackOfChallenges {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_AllChallenges;
    
public:
    UAthenaMapNavigableIconStackOfNoLocationChallenges();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetChallengesInfo(int32 ChallengesNum, int32 CountOfCompletedChallenges);
    
};

