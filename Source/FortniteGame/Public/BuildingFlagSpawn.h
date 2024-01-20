#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingGameplayActor.h"
#include "CarriedObjectAttachmentInfo.h"
#include "FortCarriedObjectHolderInterface.h"
#include "Templates/SubclassOf.h"
#include "BuildingFlagSpawn.generated.h"

class AActor;
class AFortCarriedObject;
class USceneComponent;

UCLASS(Blueprintable)
class ABuildingFlagSpawn : public ABuildingGameplayActor, public IFortCarriedObjectHolderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HUDIndicatorRelativeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPickupOnTouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortCarriedObject> CarriedObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortCarriedObject* SpawnedObject;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDelay;
    
    ABuildingFlagSpawn();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnCarriedObject();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCarriedObjectDetachedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCarriedObjectAttachedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnedObjectAwayFromBase() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void OnCarriedObjectDetach(AActor* DetachedObject) override PURE_VIRTUAL(OnCarriedObjectDetach,);
    
    UFUNCTION()
    void OnCarriedObjectAttach(AActor* AttachedObject) override PURE_VIRTUAL(OnCarriedObjectAttach,);
    
    UFUNCTION()
    void GetCarriedObjectAttachmentInfo(FCarriedObjectAttachmentInfo& OutAttachInfo) const override PURE_VIRTUAL(GetCarriedObjectAttachmentInfo,);
    
    UFUNCTION()
    USceneComponent* GetAttachmentComponent(FName SocketName) const override PURE_VIRTUAL(GetAttachmentComponent, return NULL;);
    
    UFUNCTION()
    bool CanHoldObject(AActor* CarriableObject) const override PURE_VIRTUAL(CanHoldObject, return false;);
    
};

