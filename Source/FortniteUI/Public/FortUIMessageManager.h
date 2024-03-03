#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnMessageAvailableDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortUIMessageManager.generated.h"

class APlayerController;
class UFortUIMessageItemWidget;

UCLASS(Blueprintable, NotPlaceable)
class UFortUIMessageManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMessageAvailable OnMessageAvailable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortUIMessageItemWidget*> MessageQueue;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UFortUIMessageItemWidget>> CurrentlyDisplayedMessages;
    
public:
    UFortUIMessageManager();
private:
    UFUNCTION(BlueprintCallable)
    void HandleMessageRemoved(UFortUIMessageItemWidget* MessageItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleMessageDisplayed(UFortUIMessageItemWidget* MessageItem);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumDisplayedItems() const;
    
    UFUNCTION(BlueprintCallable)
    UFortUIMessageItemWidget* GetNextMessageInQueue();
    
    UFUNCTION(BlueprintCallable)
    UFortUIMessageItemWidget* AddMessageItem(TSubclassOf<UFortUIMessageItemWidget> MessageItemClass, APlayerController* OwningPlayer, FName MessageID, int32 StackCount);
    
};

