#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "OnSearchTextChangedEventDelegate.h"
#include "SearchPanel.generated.h"

class UCommonButton;
class UEditableTextBox;

UCLASS(Blueprintable, EditInlineNew)
class USearchPanel : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSearchTextChangedEvent OnSearchTextChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* EditableText_Search;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_TextSearch;
    
public:
    USearchPanel();
private:
    UFUNCTION(BlueprintCallable)
    void HandleSearchButtonClick();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnSearchTextChanged(const FText& Text);
    
};

