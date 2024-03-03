#pragma once
#include "CoreMinimal.h"
#include "CurieComponent.h"
#include "EFortCurieNativeFXType.h"
#include "FortCurieComponent.generated.h"

class AActor;
class UFortCurieCableSocketComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortCurieComponent : public UCurieComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* LastElecticalPropagationParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float LastElectrifiedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float LastFireFXRelatedStateTime;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveStateBitfield, meta=(AllowPrivateAccess=true))
    uint16 ActiveStateBitfield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* CurieCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortCurieCableSocketComponent* CableSocketComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortCurieNativeFXType TrackedNativeGlowFlags;
    
public:
    UFortCurieComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetCurieCollisionComponent(UPrimitiveComponent* CollisionComponent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveStateBitfield();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLastElectricalPropagationParent() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EnableOutgoingInteractions();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DisableOutgoingInteractions();
    
};

