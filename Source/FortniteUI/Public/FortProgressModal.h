#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "FortActivatablePanel.h"
#include "FortProgressModal.generated.h"

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
    
    UFortProgressModal();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitle(const FText& InTitle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIcon(FSlateBrush InIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDescription(const FText& InDescription);
    
};

