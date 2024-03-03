#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventDelegateHolder.h"
#include "OnMissionBuildingSMActorHarvestedEventDelegate.h"
#include "BuildingSMActorHarvestedDelegateHolder.generated.h"

UCLASS(Blueprintable)
class UBuildingSMActorHarvestedDelegateHolder : public UFortMissionEventDelegateHolder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionBuildingSMActorHarvestedEvent OnBuildingSMActorHarvestedDelegate;
    
public:
    UBuildingSMActorHarvestedDelegateHolder();
};

