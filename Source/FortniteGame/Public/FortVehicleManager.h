#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "OnVehicleCountByTagChangedDelegate.h"
#include "FortVehicleManager.generated.h"

class AFortAthenaVehicle;
class AFortVehicleManager;
class UObject;

UCLASS(Blueprintable)
class AFortVehicleManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleCountByTagChanged OnVehicleCountByTagChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortAthenaVehicle*> Vehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> VehicleCountByTagMap;
    
public:
    AFortVehicleManager();
private:
    UFUNCTION(BlueprintCallable)
    void OnNavSystemLockReleased();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetVehicleManager(const UObject* WorldContextObject, AFortVehicleManager*& VehicleManager);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVehicleCountByTag(FGameplayTag VehicleTag) const;
    
};

