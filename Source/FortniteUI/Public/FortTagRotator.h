#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortTagRotator.generated.h"

class UCommonTextBlock;
class UFortTagTitleMapping;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTagRotator : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenTitleChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTagTitleMapping* TagTitleMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_TagCallout;
    
public:
    UFortTagRotator();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTagText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTagExit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTagEnter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveStatusChanged(bool bIsActive);
    
};

