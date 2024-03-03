#pragma once
#include "CoreMinimal.h"
#include "BuildingGameplayActor.h"
#include "CurrentWeaponChangedDelegate.h"
#include "EFortRarity.h"
#include "Recipe.h"
#include "BuildingPhoenixRepairActor.generated.h"

class AFortPlayerController;
class UFortItemDefinition;
class UFortWorldItem;

UCLASS(Blueprintable)
class ABuildingPhoenixRepairActor : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItemDefinition*> ResourceWhitelist;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrentWeaponChanged OnCurrentWeaponChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCallOnLocalInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCurrentInteractionSuccess: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity RepairedWeaponRarity;
    
public:
    ABuildingPhoenixRepairActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWeaponRepairRecipe(AFortPlayerController* FPC, FRecipe& OutRecipe) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWeaponHasDurability(UFortWorldItem* WeaponItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWorldItem* GetCurrentWeapon(AFortPlayerController* FPC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanWeaponBeRepaired(UFortWorldItem* WeaponItem) const;
    
};

