#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EBuildingMode.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_BlockBuilding.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_BlockBuilding : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingMode AllowBuilding;
    
public:
    AFortAthenaMutator_BlockBuilding();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTagContainer GetHUDVisibilityTags() const;
    
};

