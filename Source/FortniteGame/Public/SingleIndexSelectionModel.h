#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EIndexNavigationResult.h"
#include "IndexSelectionModelChangedDelegateDelegate.h"
#include "SingleIndexSelectionModel.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class USingleIndexSelectionModel : public UInterface {
    GENERATED_BODY()
};

class ISingleIndexSelectionModel : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual EIndexNavigationResult TryMoveDelta(int32 InDelta) PURE_VIRTUAL(TryMoveDelta, return EIndexNavigationResult::Succeeded;);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetSelectedIndex(int32 Value) PURE_VIRTUAL(SetSelectedIndex,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RemoveOnSelectedIndexChangedDelegate(const FIndexSelectionModelChangedDelegate& InDelegate) const PURE_VIRTUAL(RemoveOnSelectedIndexChangedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RemoveOnNumItemsChangedDelegate(const FIndexSelectionModelChangedDelegate& InDelegate) const PURE_VIRTUAL(RemoveOnNumItemsChangedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RemoveOnNavigationChangedDelegate(const FIndexSelectionModelChangedDelegate& InDelegate) const PURE_VIRTUAL(RemoveOnNavigationChangedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetSelectedIndex() const PURE_VIRTUAL(GetSelectedIndex, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetNumItems() const PURE_VIRTUAL(GetNumItems, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual EIndexNavigationResult CanMoveDelta(int32 InDelta) const PURE_VIRTUAL(CanMoveDelta, return EIndexNavigationResult::Succeeded;);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddOnSelectedIndexChangedDelegate(const FIndexSelectionModelChangedDelegate& InDelegate) const PURE_VIRTUAL(AddOnSelectedIndexChangedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddOnNumItemsChangedDelegate(const FIndexSelectionModelChangedDelegate& InDelegate) const PURE_VIRTUAL(AddOnNumItemsChangedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddOnNavigationChangedDelegate(const FIndexSelectionModelChangedDelegate& InDelegate) const PURE_VIRTUAL(AddOnNavigationChangedDelegate,);
    
};

