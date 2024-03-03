#pragma once
#include "CoreMinimal.h"
#include "FortHUDTagPromptData.h"
#include "FortHUDElementWidget.h"
#include "OnOpenOrClosedDelegate.h"
#include "FortHUDTagPromptWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortHUDTagPromptWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOpenOrClosed OnOpenedOrClosed;
    
    UFortHUDTagPromptWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenWidget(const FFortHUDTagPromptData& PrompData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseWidget();
    
};

