#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortPCBInfoPanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortPCBInfoPanel : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayPCBData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PCB_Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PCB_Description;
    
public:
    UFortPCBInfoPanel();
    UFUNCTION(BlueprintCallable)
    void UpdateCMSData(bool bHasBenefitsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayPCBData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPCBHeader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPCBDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CmsDataRead();
    
};

