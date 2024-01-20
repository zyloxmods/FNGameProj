#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CarriedObjectAttachmentInfo.h"
#include "FortCarriedObjectHolderInterface.generated.h"

class AActor;
class USceneComponent;

UINTERFACE()
class UFortCarriedObjectHolderInterface : public UInterface {
    GENERATED_BODY()
};

class IFortCarriedObjectHolderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void OnCarriedObjectDetach(AActor* DetachedObject) PURE_VIRTUAL(OnCarriedObjectDetach,);
    
    UFUNCTION()
    virtual void OnCarriedObjectAttach(AActor* AttachedObject) PURE_VIRTUAL(OnCarriedObjectAttach,);
    
    UFUNCTION()
    virtual void GetCarriedObjectAttachmentInfo(FCarriedObjectAttachmentInfo& OutAttachInfo) const PURE_VIRTUAL(GetCarriedObjectAttachmentInfo,);
    
    UFUNCTION()
    virtual USceneComponent* GetAttachmentComponent(FName SocketName) const PURE_VIRTUAL(GetAttachmentComponent, return NULL;);
    
    UFUNCTION()
    virtual bool CanHoldObject(AActor* CarriableObject) const PURE_VIRTUAL(CanHoldObject, return false;);
    
};

