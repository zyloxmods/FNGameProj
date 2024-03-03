#pragma once
#include "CoreMinimal.h"
#include "BacchusActionIconMapping.h"
#include "GameplayTagContainer.h"
#include "BacchusButton.h"
#include "BacchusActionButton.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UBacchusActionButton : public UBacchusButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBacchusActionIconMapping> ActionMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TempActionMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ItemsAllowingClickThrough;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCapturesInput;
    
public:
    UBacchusActionButton();
protected:
    UFUNCTION(BlueprintCallable)
    void OnCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CustomWidget);
    
    UFUNCTION(BlueprintCallable)
    void AddActionMappings(TArray<FBacchusActionIconMapping> NewActionMappings);
    
};

