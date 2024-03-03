#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "FortActivatablePanel.h"
#include "FortProgressModal.generated.h"

class UFortProgressWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortProgressModal : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIntroOutroEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoInitialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumeAnalogInput;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortProgressWidget* ProgressWidget_Main;
    
public:
    UFortProgressModal();
    UFUNCTION(BlueprintCallable)
    void SetTitle(const FText& InTitle);
    
    UFUNCTION(BlueprintCallable)
    void SetIcon(FSlateBrush InIcon);
    
    UFUNCTION(BlueprintCallable)
    void SetDescription(const FText& InDescription);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeModal();
    
};

