#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "FortBotStructureBuilder.generated.h"

class ABuildingActor;
class AController;
class UFortBuildingInstructions;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AFortBotStructureBuilder : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortBuildingInstructions* BuildingInstructions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABuildingActor*> BuiltActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CachedGoal;
    
public:
    AFortBotStructureBuilder();
    UFUNCTION(BlueprintCallable)
    void RunDeconstructor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBuildingDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
public:
    UFUNCTION(BlueprintCallable)
    void BuildAll();
    
};

