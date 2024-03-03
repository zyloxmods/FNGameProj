#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BuildingActor.h"
#include "FortGameplayTagVolumeInterface.h"
#include "FortGameplayTagBuildingActor.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class AFortGameplayTagBuildingActor : public ABuildingActor, public IFortGameplayTagVolumeInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToApplyOnSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XGridCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 YGridCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZGridCells;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
public:
    AFortGameplayTagBuildingActor();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void ApplyTags() override PURE_VIRTUAL(ApplyTags,);
    
};

