#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GalileoComponentOnPatrollingStartDelegate.h"
#include "GalileoComponentOnPatrollingStopDelegate.h"
#include "FortAthenaNpcGalileoComponent.generated.h"

class AActor;
class AController;
class AFortAthenaAIBotController;
class AFortPawn;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAthenaNpcGalileoComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaAIBotController* CachedBotController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPawn* PossessedPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> PatrolPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortAthenaAIBotController*> CommunicationGroup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGalileoComponentOnPatrollingStart OnPatrollingStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGalileoComponentOnPatrollingStop OnPatrollingStop;
    
public:
    UFortAthenaNpcGalileoComponent();
    UFUNCTION(BlueprintCallable)
    void SetPatrolPath(const TArray<FVector>& NewPatrolPath);
    
    UFUNCTION(BlueprintCallable)
    void SetCommunicationGroup(const TArray<AFortAthenaAIBotController*>& AIBotControllerList);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetPatrolPath() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AFortAthenaAIBotController*> GetCommunicationGroup();
    
};

