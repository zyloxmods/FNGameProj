#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortShopSectionNavigator.generated.h"

class UFortShopNavigationButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortShopSectionNavigator : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortShopNavigationButton* Button_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortShopNavigationButton* Button_Previous;
    
public:
    UFortShopSectionNavigator();
    UFUNCTION(BlueprintCallable)
    void RequestPreviousSection();
    
    UFUNCTION(BlueprintCallable)
    void RequestNextSection();
    
};

