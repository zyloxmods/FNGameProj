#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameFrameworkComponent.h"
#include "EFortWeakPointState.h"
#include "FortOnWeakPointStateChangedDelegate.h"
#include "FortWeakPointTypeData.h"
#include "FortWeakPointsCoordinatorComponent.generated.h"

class AActor;
class AController;
class AFortWeakPoint;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortWeakPointsCoordinatorComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortOnWeakPointStateChanged OnWeakPointStateChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeakPoints, meta=(AllowPrivateAccess=true))
    TArray<FFortWeakPointTypeData> WeakPointTypes;
    
public:
    UFortWeakPointsCoordinatorComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWeakPointStateChanged(AFortWeakPoint* WeakPoint, EFortWeakPointState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnWeakPointDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeakPoints();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DeactivateAllWeakPointsByTag(const FGameplayTag& WeakPointsTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ActivateAllWeakPointsByTag(const FGameplayTag& WeakPointsTag);
    
};

