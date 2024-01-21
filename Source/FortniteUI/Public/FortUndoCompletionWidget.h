#pragma once
#include "CoreMinimal.h"
#include "FortUserWidget.h"
#include "FortUndoCompletionWidget.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortUndoCompletionWidget : public UFortUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextName;
    
public:
    UFortUndoCompletionWidget();
    UFUNCTION(BlueprintCallable)
    void PushWidget();
    
    UFUNCTION(BlueprintCallable)
    void PopWidget();
    
};

