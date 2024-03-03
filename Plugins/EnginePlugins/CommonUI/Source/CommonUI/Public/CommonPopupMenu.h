#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "CommonPopupMenu.generated.h"

class UMenuAnchor;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class COMMONUI_API UCommonPopupMenu : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseInputStack;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMenuAnchor> OwningMenuAnchor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> ContextProvidingObject;
    
public:
    UCommonPopupMenu();
    UFUNCTION(BlueprintCallable)
    void SetOwningMenuAnchor(const UMenuAnchor* MenuAnchor);
    
    UFUNCTION(BlueprintCallable)
    void SetContextProvider(const UObject* NewContextProvidingObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestClose();
    
    UFUNCTION(BlueprintCallable)
    void OnIsOpenChanged(bool IsOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePreDifferentContextProviderSet();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePostDifferentContextProviderSet();
    
};

