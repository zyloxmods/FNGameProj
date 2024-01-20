#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaSeasonStatusWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSeasonStatusWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UAthenaSeasonStatusWidget();
};

