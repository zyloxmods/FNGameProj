#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UINavigateDelegateDelegate.h"
#include "UINavigateGlobalDelegateDelegate.h"
#include "UINavigationEntry.h"
#include "UINavigationManager.generated.h"

UCLASS(Blueprintable, MinimalAPI, NotPlaceable)
class UUINavigationManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUINavigateGlobalDelegate OnNavigationEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUINavigationEntry> NavigationStack;
    
public:
    UUINavigationManager();
    UFUNCTION(BlueprintCallable)
    void PushNavigation(FText DisplayName, UObject* ObjectData, FName IdData, int32 IntData, const FUINavigateDelegate& OnNavigateTo, const FUINavigateDelegate& OnNavigateFrom);
    
    UFUNCTION(BlueprintCallable)
    void PopNavigation();
    
    UFUNCTION(BlueprintCallable)
    void NavigationToIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStackSize();
    
    UFUNCTION(BlueprintCallable)
    FText GetDisplayName(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ClearStack();
    
};

