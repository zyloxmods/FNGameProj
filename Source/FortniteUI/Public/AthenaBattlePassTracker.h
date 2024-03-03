#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaBattlePassTracker.generated.h"

class UAthenaBattlePassItemTracker;
class UBattlePassPurchaseScreen;
class UBattlePassScreenPurchaseButton;
class UCommonRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaBattlePassTracker : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattlePassPurchaseScreen> BattlePassPurchaseScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OutfitsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VBucksText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EmotesText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MoreRewardsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BuyBattlePassTextFormat;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattlePassPurchaseScreen* PushedPurchaseScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_PaidItemsCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaBattlePassItemTracker* BattlePassItemTracker_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaBattlePassItemTracker* BattlePassItemTracker_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaBattlePassItemTracker* BattlePassItemTracker_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaBattlePassItemTracker* BattlePassItemTracker_04;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassScreenPurchaseButton* Button_PurchaseBattlePass;
    
public:
    UAthenaBattlePassTracker();
private:
    UFUNCTION(BlueprintCallable)
    void HandleBattlePassPurchaseFlowComplete(bool bClosePresentationScreen);
    
};

