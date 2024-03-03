#pragma once
#include "CoreMinimal.h"
#include "FortClientEventInterface.h"
#include "Blueprint/UserWidget.h"
#include "FortUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortUserWidget : public UUserWidget, public IFortClientEventInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumePointerInput;
    
public:
    UFortUserWidget();
    UFUNCTION(BlueprintCallable)
    void AddStoreCheatMenu();
    
    UFUNCTION(BlueprintCallable)
    void AddGrantCheatMenu(const FString& TemplateId, const FString& InstanceID);
    
    
    // Fix for true pure virtual functions not being implemented
};

