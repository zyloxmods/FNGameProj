#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "PlaylistFrontEndData.h"
#include "AthenaPlaylistEntry.h"
#include "FortAthenaMatchmakingTile.generated.h"

class UCommonBorder;
class UCommonTextBlock;
class UEpicCMSImage;
class UFortActiveFriendsViolator;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaMatchmakingTile : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEpicCMSImage* GameModeImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* AdSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* AdText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* SpecialAdText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* GameModeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* SubGameModeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BorderDisplayStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaPlaylistEntry CMSPlaylistEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortActiveFriendsViolator* Violator_ActiveFriends;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlaylistFrontEndData TilePlaylistData;
    
public:
    UFortAthenaMatchmakingTile();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTileAvailability(bool Available);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TilePlaylistSetAsMatchmakingPlaylist();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTileSize(int32 NumRowTiles);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDefaultImage();
    
    UFUNCTION(BlueprintCallable)
    void PopulateTextFieldsFromCMS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaylistChanged(const FPlaylistFrontEndData& PlaylistToRepresent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCMSDataUpdated();
    
};

