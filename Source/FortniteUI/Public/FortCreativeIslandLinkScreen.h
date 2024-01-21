#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "CachedIslandsGroup.h"
#include "EFortCreativeIslandLinkValidationResult.h"
#include "FortActivatablePanel.h"
#include "OnCreativeIslandCodeConfirmedDelegate.h"
#include "FortCreativeIslandLinkScreen.generated.h"

class AFortAthenaCreativePortal;
class UCommonButton;
class UEditableText;
class UListView;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeIslandLinkScreen : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumDebugIslandLinks;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeIslandCodeConfirmed OnCreativeIslandCodeConfirmed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText_IslandLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* ListView_IslandLinks;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Select;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Refresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Remove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedIslandsGroup FavoriteIslands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedIslandsGroup IslandHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaCreativePortal* TargetPortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime LastRefreshTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LastTestedMnemonic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCodeLookupRequestInFlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFriendsGetRequestInFlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFavoritesOnlyMode;
    
public:
    UFortCreativeIslandLinkScreen();
    UFUNCTION(BlueprintCallable)
    void SetTargetPortal(AFortAthenaCreativePortal* Portal);
    
    UFUNCTION(BlueprintCallable)
    void SetFavoritesOnlyMode(bool bFavoritesOnly);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIslandFromFavorites(const FString& LinkCode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreativeIslandLinkValidated(EFortCreativeIslandLinkValidationResult ValidateResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreativeIslandLinksPopulated();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleIslandSelectionChanged(UObject* Item);
    
    UFUNCTION(BlueprintCallable)
    void HandleIslandLinkCommitted(const FText& InText, TEnumAsByte<ETextCommit::Type> CommitInfo);
    
    UFUNCTION(BlueprintCallable)
    void HandleIslandLinkChanged(const FText& Text);
    
};

