#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortBannerSelectorBase.generated.h"

class UBorder;
class UCommonTextBlock;
class UEditableText;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UFortBannerSelectorBase : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* BannerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BannerNameMaxLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* ErrorBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* ErrorText;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFilterHomeBaseNameWithOSS;
    
public:
    UFortBannerSelectorBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateErrorText(const FText& ErrorMessageText);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHomebaseNameCommitSucceeded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHomebaseNameCommitFailed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsPlayerNameValid(const FText& PlayerName, bool& OutIsValid, FText& OutErrorText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasIllegalChars(const FString& NewBannerName) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleBannerNameChanged(const FText& Text);
    
public:
    UFUNCTION(BlueprintCallable)
    void CompleteHomebaseName();
    
    UFUNCTION(BlueprintCallable)
    void CompleteHomebaseBannerSelection();
    
};

