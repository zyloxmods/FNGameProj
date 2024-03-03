#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingSMActor.h"
#include "FortPlayerSpawnPad.generated.h"

class AFortPlayerPawn;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class AFortPlayerSpawnPad : public ABuildingSMActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> Chests;
    
    AFortPlayerSpawnPad();
    UFUNCTION(BlueprintCallable)
    void PrestreamChestTextures();
    
    UFUNCTION(BlueprintCallable)
    void InitializeChestProgression();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    int32 GetRewardedChestIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPossessedPlayerPawnsByID(TArray<AFortPlayerPawn*>& SortedPlayerPawns) const;
    
    UFUNCTION(BlueprintCallable)
    void ChestProgressionUpdate(FVector PrimaryChestOffset, FVector ChestOffset);
    
};

