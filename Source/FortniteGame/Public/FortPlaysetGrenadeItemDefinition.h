#pragma once
#include "CoreMinimal.h"
#include "FortWeaponRangedItemDefinition.h"
#include "LevelSaveRecordProvider.h"
#include "FortPlaysetGrenadeItemDefinition.generated.h"

class UFortPlaysetItemDefinition;

UCLASS(Blueprintable, MinimalAPI)
class UFortPlaysetGrenadeItemDefinition : public UFortWeaponRangedItemDefinition, public ILevelSaveRecordProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortPlaysetItemDefinition> PlaysetToSpawn;
    
public:
    UFortPlaysetGrenadeItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPlaysetItemDefinition* GetPlaysetToSpawn(bool bForceLoad) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

