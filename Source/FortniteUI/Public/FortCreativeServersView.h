#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Templates/SubclassOf.h"
#include "FortCreativeServersView.generated.h"

class UCommonButtonGroup;
class UFortCreativeServerInfo;
class UFortCreativeServerOptionTile;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeServersView : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSuggestedServers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugServers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCreativeServerOptionTile> TileItemClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* ServerButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_ServerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortCreativeServerInfo*> ServerList;
    
public:
    UFortCreativeServersView();
protected:
    UFUNCTION(BlueprintCallable)
    void RefreshServerList();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreativeServerListRefreshed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NavigateServerRight();
    
    UFUNCTION(BlueprintCallable)
    void NavigateServerLeft();
    
};

