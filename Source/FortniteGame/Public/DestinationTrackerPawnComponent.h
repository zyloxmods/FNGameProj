#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PawnComponent.h"
#include "DestinationTrackerPawnComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDestinationTrackerPawnComponent : public UPawnComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Destination, meta=(AllowPrivateAccess=true))
    FVector Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DistanceSquared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator Direction;
    
public:
    UDestinationTrackerPawnComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Destination();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDestination() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceSquared() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDestination() const;
    
};

