#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EAthenaNewsStyle.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaNewsWidget.generated.h"

class UCommonTextBlock;
class UFortAthenaNewsTile;
class UHorizontalBox;
class UScrollBox;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaNewsWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaNewsTile> NewsTileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaNewsTile> SpotlightNewsTileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaNewsTile> SpecialEventNewsTileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaNewsTile> SpotlightSpecialEventNewsTileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaNewsTile> SpecialEvent2NewsTileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaNewsTile> SpotlightSpecialEvent2NewsTileClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortAthenaNewsTile*> NewsTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* CommonText_NewsHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_NewsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_NewsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox_SpotlightNewsContainer;
    
public:
    UFortAthenaNewsWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SingleItemConfiguration();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetViewConfiguration();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayNewsTilesIntro();
    
public:
    UFUNCTION(BlueprintCallable)
    void LogMotDLobbyNavAction();
    
    UFUNCTION(BlueprintCallable)
    void LogMotDCloseAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleNewsStyle(EAthenaNewsStyle NewsStyle);
    
};

