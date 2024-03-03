#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PrimitiveModularCrosstalkInterface.generated.h"

class UObject;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UPrimitiveModularCrosstalkInterface : public UInterface {
    GENERATED_BODY()
};

class IPrimitiveModularCrosstalkInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void UnbindObjectCallbacksFromAllTaggedDelegates(UObject* Object) PURE_VIRTUAL(UnbindObjectCallbacksFromAllTaggedDelegates,);
    
    UFUNCTION(BlueprintCallable)
    virtual void UnbindNoParamEventFromTaggedDelegate(const FName DelegateTag, UObject* Object) PURE_VIRTUAL(UnbindNoParamEventFromTaggedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SendTaggedStringPayload(const FName Tag, const FString& Payload) PURE_VIRTUAL(SendTaggedStringPayload,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SendTaggedObjectPayload(const FName Tag, UObject* Payload) PURE_VIRTUAL(SendTaggedObjectPayload,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SendTaggedIntPayload(const FName Tag, int32 Payload) PURE_VIRTUAL(SendTaggedIntPayload,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SendTagAsPayload(const FName Tag) PURE_VIRTUAL(SendTagAsPayload,);
    
    UFUNCTION(BlueprintCallable)
    virtual FString GetTaggedStringPayload(const FName Tag) PURE_VIRTUAL(GetTaggedStringPayload, return TEXT(""););
    
    UFUNCTION(BlueprintCallable)
    virtual UObject* GetTaggedObjectPayload(const FName Tag) PURE_VIRTUAL(GetTaggedObjectPayload, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetTaggedIntPayload(const FName Tag) PURE_VIRTUAL(GetTaggedIntPayload, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BindNoParamEventToTaggedDelegate(const FName DelegateTag, UObject* Object, const FName CallbackEventName) PURE_VIRTUAL(BindNoParamEventToTaggedDelegate,);
    
};

