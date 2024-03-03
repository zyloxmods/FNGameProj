#pragma once
#include "CoreMinimal.h"
#include "EFortVoteType.h"
#include "FortUINotification.h"
#include "FortMissionVoteUINotification.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortMissionVoteUINotification : public UFortUINotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortVoteType VoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasVoteEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VoteResult;
    
    UFortMissionVoteUINotification();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActionTaken();
    
};

