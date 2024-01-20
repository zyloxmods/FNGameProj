#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_Missions.generated.h"

class UFortMissionInfo;

UCLASS(Blueprintable)
class AFortAthenaMutator_Missions : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortMissionInfo*> Missions;
    
public:
    AFortAthenaMutator_Missions();
};

