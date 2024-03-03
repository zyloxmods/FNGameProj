#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortDropdownDelegateRegistrar.generated.h"

class UCommonButton;
class UFortDropdownMenu;
class UMenuAnchor;
class UWidget;

UCLASS(Blueprintable)
class UFortDropdownDelegateRegistrar : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ContextProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuAnchor* MenuAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDropdownMenu* CachedDropdownMenu;
    
public:
    UFortDropdownDelegateRegistrar();
private:
    UFUNCTION(BlueprintCallable)
    void OnOpenStatusChanged(bool bIsOpen);
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetOrCreateDropdownMenu();
    
};

