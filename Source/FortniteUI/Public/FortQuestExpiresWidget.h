#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortQuestExpiresWidget.generated.h"

class UFortQuestItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortQuestExpiresWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortQuestItem> Item;
    
public:
    UFortQuestExpiresWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetData(UFortQuestItem* InItem);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnQuestExpirationUpdated();
    
};

